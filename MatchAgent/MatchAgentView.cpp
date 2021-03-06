// MatchAgentView.cpp : CMatchAgentView 클래스의 구현
//

#include "stdafx.h"
#include "MatchAgent.h"

#include "MatchAgentDoc.h"
#include "MatchAgentView.h"
#include ".\matchagentview.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMatchAgentView

IMPLEMENT_DYNCREATE(CMatchAgentView, CView)

BEGIN_MESSAGE_MAP(CMatchAgentView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

// CMatchAgentView 생성/소멸

CMatchAgentView::CMatchAgentView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CMatchAgentView::~CMatchAgentView()
{
}

BOOL CMatchAgentView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	// Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CMatchAgentView 그리기

void CMatchAgentView::OnDraw(CDC* /*pDC*/)
{
	CMatchAgentDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CMatchAgentView 인쇄

BOOL CMatchAgentView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CMatchAgentView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CMatchAgentView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CMatchAgentView 진단

#ifdef _DEBUG
void CMatchAgentView::AssertValid() const
{
	CView::AssertValid();
}

void CMatchAgentView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMatchAgentDoc* CMatchAgentView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMatchAgentDoc)));
	return (CMatchAgentDoc*)m_pDocument;
}
#endif //_DEBUG


// CMatchAgentView 메시지 처리기

void CMatchAgentView::OnSetFocus(CWnd* pOldWnd)
{
	CView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	GetDocument()->SetTitle("MatchAgentView");
}

