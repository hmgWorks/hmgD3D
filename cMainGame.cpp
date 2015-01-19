#include "StdAfx.h"
#include "cMainGame.h"


cMainGame::cMainGame(void)
{
}


cMainGame::~cMainGame(void)
{
	
	cDeviceManager* pDevice = cDeviceManager::GetInstance();
	pDevice->Destroy();
	
}

void cMainGame::Setup()
{
	
}


void cMainGame::Update()
{
	
}

void cMainGame::Render()
{
	g_pD3DDevice->Clear(NULL,
		NULL,
		D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER,
		D3DCOLOR_XRGB(47, 121, 112),
		1.0f, 0);
	g_pD3DDevice->BeginScene();

	// 그림을 그린다.

	g_pD3DDevice->EndScene();
	g_pD3DDevice->Present(NULL, NULL, NULL, NULL);
}