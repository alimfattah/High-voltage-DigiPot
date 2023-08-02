unit Unit1;
interface
uses
 Winapi.Windows, Winapi.Messages, System.SysUtils,
System.Variants, System.Classes, Vcl.Graphics,
 Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, CPort;
type
 TForm1 = class(TForm)
 ComPort1: TComPort;
 Edit1: TEdit;
 Button_set: TButton;
 Button_setcmprt: TButton;
 Label1: TLabel;
 Button_openprt: TButton;
 Button_closeprt: TButton;
 Label_statuscom: TLabel;
 Label3: TLabel;
 Label_pos: TLabel;
 procedure Button_setcmprtClick(Sender: TObject);
 procedure Button_setClick(Sender: TObject);
 procedure Button_openprtClick(Sender: TObject);
 procedure Button_closeprtClick(Sender: TObject);
 procedure ComPort1AfterClose(Sender: TObject);
 procedure ComPort1AfterOpen(Sender: TObject);
 procedure FormCreate(Sender: TObject);
 private
 { Private declarations }
 public
 { Public declarations }
 end;
var
 Form1: TForm1;
 var1:integer;
implementation
{$R *.dfm}
procedure TForm1.Button_setClick(Sender: TObject);
begin
var1:= StrtoInt(edit1.Text);
if (var1>=1) and (var1<=255) then
begin
label_pos.Caption:=InttoStr(var1);
comport1.WriteStr(edit1.Text);
end;
if (var1=0) then
begin
label_pos.Caption:=InttoStr(var1);
comport1.WriteStr('256');
end
else begin
edit1.Text:='';
end;
end;
procedure TForm1.Button_setcmprtClick(Sender: TObject);
begin
comport1.Close;
comport1.BeginUpdate;
comport1.ShowSetupDialog;
comport1.EndUpdate ;
Button_openprt.Enabled:=true;
Button_closeprt.Enabled:=true;
label_statuscom.Caption:= 'Status '+comport1.Port+' close' ;
end;
procedure TForm1.Button_openprtClick(Sender: TObject);
begin
comport1.Open;
end;
procedure TForm1.Button_closeprtClick(Sender: TObject);
begin
comport1.Close;
end;
procedure TForm1.ComPort1AfterClose(Sender: TObject);
begin
 label_statuscom.Caption:= 'Status '+comport1.Port+' close' ;
 Button_set.Enabled:=false;
end;
procedure TForm1.ComPort1AfterOpen(Sender: TObject);
begin
 label_statuscom.Caption:='Status '+comport1.Port+' open' ;
 Button_set.Enabled:=true;
end;
procedure TForm1.FormCreate(Sender: TObject);
begin
 Button_set.Enabled:=false;
 Button_openprt.Enabled:=false;
 Button_closeprt.Enabled:=false;
 label_statuscom.Caption:='Status '+comport1.Port+' close' ;
end;
end
