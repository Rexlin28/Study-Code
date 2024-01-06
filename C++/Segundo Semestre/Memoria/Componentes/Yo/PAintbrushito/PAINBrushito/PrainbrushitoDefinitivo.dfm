object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 635
    Height = 41
    Align = alTop
    TabOrder = 0
    ExplicitLeft = -8
    object Button1: TButton
      Left = 40
      Top = 10
      Width = 75
      Height = 25
      Caption = 'Cuadrado'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 198
      Top = 10
      Width = 75
      Height = 25
      Caption = 'Circulo'
      TabOrder = 1
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 367
      Top = 10
      Width = 75
      Height = 25
      Caption = 'Elipse'
      TabOrder = 2
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 520
      Top = 10
      Width = 75
      Height = 25
      Caption = 'Triangulo'
      TabOrder = 3
      OnClick = Button4Click
    end
  end
  object PDibujo: TPanel
    Left = 0
    Top = 41
    Width = 635
    Height = 217
    Align = alClient
    TabOrder = 1
    OnMouseDown = PDibujoMouseDown
    ExplicitLeft = 264
    ExplicitTop = 152
    ExplicitWidth = 185
    ExplicitHeight = 41
  end
  object Panel3: TPanel
    Left = 0
    Top = 258
    Width = 635
    Height = 41
    Align = alBottom
    TabOrder = 2
    ExplicitLeft = 528
    ExplicitTop = 216
    ExplicitWidth = 185
  end
end
