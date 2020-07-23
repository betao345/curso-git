[1mdiff --git a/Nova pasta/Unit1.dfm b/Nova pasta/Unit1.dfm[m
[1mindex 2a06281..aa0ae76 100644[m
[1m--- a/Nova pasta/Unit1.dfm[m	
[1m+++ b/Nova pasta/Unit1.dfm[m	
[36m@@ -28,22 +28,13 @@[m [mobject Form1: TForm1[m
     TabOrder = 0[m
     Text = 'Edit1'[m
   end[m
[31m-  object Memo1: TMemo[m
[31m-    Left = 252[m
[31m-    Top = 78[m
[31m-    Width = 185[m
[31m-    Height = 89[m
[31m-    Lines.Strings = ([m
[31m-      'Memo1')[m
[31m-    TabOrder = 1[m
[31m-  end[m
   object Button1: TButton[m
     Left = 94[m
     Top = 14[m
     Width = 75[m
     Height = 25[m
     Caption = 'Button1'[m
[31m-    TabOrder = 2[m
[32m+[m[32m    TabOrder = 1[m
   end[m
   object Button2: TButton[m
     Left = 48[m
[36m@@ -51,22 +42,6 @@[m [mobject Form1: TForm1[m
     Width = 75[m
     Height = 25[m
     Caption = 'Button2'[m
[31m-    TabOrder = 3[m
[31m-  end[m
[31m-  object RadioButton1: TRadioButton[m
[31m-    Left = 156[m
[31m-    Top = 124[m
[31m-    Width = 113[m
[31m-    Height = 17[m
[31m-    Caption = 'RadioButton1'[m
[31m-    TabOrder = 4[m
[31m-  end[m
[31m-  object ListBox1: TListBox[m
[31m-    Left = 310[m
[31m-    Top = 12[m
[31m-    Width = 121[m
[31m-    Height = 97[m
[31m-    ItemHeight = 13[m
[31m-    TabOrder = 5[m
[32m+[m[32m    TabOrder = 2[m
   end[m
 end[m
[1mdiff --git a/Nova pasta/Unit1.pas b/Nova pasta/Unit1.pas[m
[1mindex 049589b..20708e6 100644[m
[1m--- a/Nova pasta/Unit1.pas[m	
[1m+++ b/Nova pasta/Unit1.pas[m	
[36m@@ -9,11 +9,8 @@[m [muses[m
 type[m
   TForm1 = class(TForm)[m
     Edit1: TEdit;[m
[31m-    Memo1: TMemo;[m
     Button1: TButton;[m
     Button2: TButton;[m
[31m-    RadioButton1: TRadioButton;[m
[31m-    ListBox1: TListBox;[m
   private[m
     { Private declaratio[m
     Label1: TLabel;ns }[m
[1mdiff --git a/cmd.exe b/cmd.exe[m
[1mdeleted file mode 100644[m
[1mindex 2581c84..0000000[m
Binary files a/cmd.exe and /dev/null differ
