object MainForm: TMainForm
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'VolumeKey'
  ClientHeight = 325
  ClientWidth = 292
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -15
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 20
  object Logo: TStaticText
    Left = 48
    Top = 8
    Width = 179
    Height = 32
    Caption = 'VolumeKey Settings'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object UpAlt: TCheckBox
    Left = 24
    Top = 80
    Width = 41
    Height = 17
    Caption = 'Alt'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object UpCtrl: TCheckBox
    Left = 63
    Top = 80
    Width = 41
    Height = 17
    Caption = 'Ctrl'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object UpShift: TCheckBox
    Left = 104
    Top = 80
    Width = 51
    Height = 17
    Caption = 'Shift'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
  object UpWin: TCheckBox
    Left = 151
    Top = 80
    Width = 50
    Height = 17
    Caption = 'Win'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
  end
  object UpKey: TEdit
    Left = 199
    Top = 77
    Width = 50
    Height = 23
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    MaxLength = 1
    ParentFont = False
    TabOrder = 5
    Text = 'U'
  end
  object UpText: TStaticText
    Left = 24
    Top = 58
    Width = 74
    Height = 24
    Caption = 'UpVolume'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
  end
  object DownText: TStaticText
    Left = 24
    Top = 106
    Width = 94
    Height = 24
    Caption = 'DownVolume'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
  end
  object DownAlt: TCheckBox
    Left = 24
    Top = 128
    Width = 41
    Height = 17
    Caption = 'Alt'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
  end
  object DownCtrl: TCheckBox
    Left = 63
    Top = 128
    Width = 41
    Height = 17
    Caption = 'Ctrl'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
  end
  object DownShift: TCheckBox
    Left = 104
    Top = 128
    Width = 51
    Height = 17
    Caption = 'Shift'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
  end
  object DownWin: TCheckBox
    Left = 151
    Top = 128
    Width = 50
    Height = 17
    Caption = 'Win'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 11
  end
  object DownKey: TEdit
    Left = 199
    Top = 125
    Width = 50
    Height = 23
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    MaxLength = 1
    ParentFont = False
    TabOrder = 12
    Text = 'D'
  end
  object MuteText: TStaticText
    Left = 24
    Top = 154
    Width = 89
    Height = 24
    Caption = 'MuteVolume'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 13
  end
  object MuteAlt: TCheckBox
    Left = 24
    Top = 176
    Width = 41
    Height = 17
    Caption = 'Alt'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 14
  end
  object MuteCtrl: TCheckBox
    Left = 63
    Top = 176
    Width = 41
    Height = 17
    Caption = 'Ctrl'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 15
  end
  object MuteShift: TCheckBox
    Left = 104
    Top = 176
    Width = 51
    Height = 17
    Caption = 'Shift'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 16
  end
  object MuteWin: TCheckBox
    Left = 151
    Top = 176
    Width = 50
    Height = 17
    Caption = 'Win'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 17
  end
  object MuteKey: TEdit
    Left = 199
    Top = 173
    Width = 50
    Height = 23
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    MaxLength = 1
    ParentFont = False
    TabOrder = 18
    Text = 'M'
  end
  object HRButton: TButton
    Left = 143
    Top = 264
    Width = 122
    Height = 33
    Caption = 'Hide and Run'
    TabOrder = 19
    OnClick = HideAndRunProgram
  end
  object RButton: TButton
    Left = 24
    Top = 264
    Width = 113
    Height = 33
    Caption = 'Run'
    TabOrder = 20
    OnClick = RunProgram
  end
end
