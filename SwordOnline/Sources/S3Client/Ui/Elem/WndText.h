/*****************************************************************************************
//	���洰����ϵ�ṹ--�ı�����
//	Copyright : Kingsoft 2002
//	Author	:   Wooy(Wu yue)
//	CreateTime:	2002-7-23
------------------------------------------------------------------------------------------
*****************************************************************************************/
#pragma once
#include "WndWindow.h"

#define	WNDTEXT_ES_HALIGN_CENTRE	0x0001		//ˮƽ����
#define	WNDTEXT_ES_HALIGN_RIGHT		0x0002		//ˮƽ���Ҷ���
#define	WNDTEXT_ES_VALIGN_CENTRE	0x0004		//��ֱ����
#define	WNDTEXT_ES_VALIGN_BOTTOM	0x0008		//��ֱ���׶���
#define	WNDTEXT_ES_HALIGN_FILTER	(WNDTEXT_ES_HALIGN_RIGHT | WNDTEXT_ES_HALIGN_CENTRE)
#define	WNDTEXT_ES_VALIGN_FILTER	(WNDTEXT_ES_VALIGN_BOTTOM | WNDTEXT_ES_VALIGN_CENTRE)
#define	WNDTEXT_ES_ALIGN_FILTER		(WNDTEXT_ES_HALIGN_FILTER | WNDTEXT_ES_VALIGN_FILTER)

#define	WNDTEXT_ES_MULTILINE		0x0010		//����


//=================================
//		�ı����ڻ�����
//=================================
class KWndText : public KWndWindow
{
public:
	KWndText();
	virtual int		Init(KIniFile* pIniFile, const char* pSection);//��ʼ��
	virtual int		WndProc(unsigned int uMsg, unsigned int uParam, int nParam);//���ں���
	virtual void	PaintWindow();							//���ƴ���
	int				GetText(char* pBuffer, int nSize);		//��ȡ�ַ�������
	void			Clear(bool bSafe = false);
	void			SetText(const char* pText, int nLen = -1);	//�����ı�����
	void			SetTextColor(unsigned int Color);		//�����ı�������ɫ
	void			SetBorderTextColor(unsigned int Color);		//�����ı�������ɫ
	void			SetIntText(int nNumber, char Separator = 0);
	void			SetMoneyUnitText(int nMoneyUnit);
	void			SetMoneyUnitPrice(int nPrice, int nMoneyUnit);
	void			SetExtPointText(int nNumber);
	void			Set3IntText(int nNumber, bool bRound = false, const char* szUnit="l��ng");
	void			Set4IntText(int nNumber);
	void			Set5IntText(int nNumber, bool bFlag = false);//�����ı���������Ϊ��������������ַ���
	void			Set6IntText(int nNumber, char Separator = 0);
	void			Set6IntText(int nNumber1, int nNumber2, char Separator1 = 0, char Separator2 = 0);
	void			SetResistPlus(int nNumber, char Separator = 0);
	//�����ı���������Ϊ��������������������ַ�����������������ָ�����ַ��ָ�
	void			Set2IntText(int nNumber1, int nNumber2, char Separator);
	void			Set2IntText2(int nNumber1, int nNumber2, char Separator1, char Separator2);
	int				SetTopLine(int nTopLine);				//���ô��ı����ĵڼ��п�ʼ��ʾ
	int				GetLineCount() { return m_nLineCount; }	//get line count of the text content
	void			Clone(KWndText* pCopy);
	void SetHAlign(unsigned int nType)
	{
		m_Style |= nType;		
	};
	void SetFontSize(int nFontSize);
	int				GetFontSize() { return m_nFontSize; }
	virtual const char*	GetShortKey() {return NULL;}	//ȡ��ݼ�,����Tip��ʾ
	static void		SetAllButtonTipTextColor(unsigned int uColor);	//�������а�ť��ʾ�������ֵ���ɫ
	static void		EnableAllButtonTip(int bEnable);		
	virtual int		GetToolTipInfo(char* szTip, int nMax);
	int		SetToolTipInfo(char* szTip, int nMax);
	void	SetToolTipHover(bool bFlag) {m_bTipHover = bFlag;};
protected:
	void			SetTextPtr(char* pText, int nBuffLen);	//�����ı�������ָ��

private:
	int				m_nFontSize;		//�����С
	unsigned int	m_TextColor;		//������ɫ
	unsigned int	m_BorderColor;		//���ֱ�Ե��ɫ

	char*			m_pText;			//�ı�������
	int				m_nBuffLen;			//�ı���������С
	int				m_nTextLen;			//�ַ����Ĵ洢����	
	int				m_nTopLine;			//��ʾ��ͷһ�е��кţ���0��ʼ
	int				m_nLineCount;		//�ı��ܵ�����Ŀ
	char			m_szTip[256];
	int				m_nTipLen;
	bool			m_bTipHover;
private:
	static unsigned int	ms_uBtnTipTextColor;	//��ť��ʾ�������ֵ���ɫ
	static int			ms_nDisableBtnTip;		//�Ƿ��ֹ��ť����ʾ����
};

//=================================
//	�ı�����������Ϊ32���ı�������
//=================================
class KWndText32 : public KWndText
{
private:
	char			m_Text[32];
public:
	KWndText32();
};

//=================================
//	�ı�����������Ϊ80���ı�������
//=================================
class KWndText80 : public KWndText
{
private:
	char			m_Text[80];
public:
	KWndText80();
};

//=================================
//	�ı�����������Ϊ256���ı�������
//=================================
class KWndText256 : public KWndText
{
private:
	char			m_Text[256];
public:
	KWndText256();
};

//=================================
//	�ı�����������Ϊ256���ı�������
//=================================
class KWndText512 : public KWndText
{
private:
	char			m_Text[512];
public:
	KWndText512();
};
