#pragma once

#include "Libreria.h"
#include "Tutorial7.cpp"

struct SimpleVertex
{
    XMFLOAT3 Pos;
    XMFLOAT2 TexCoord;
};

class Juego
{
public:
    Juego();
    ~Juego();

    HRESULT InitWindow(HINSTANCE hInstance, int nCmdShow);
    HRESULT InitDevice();
    HRESULT CompileShaderFromFile(WCHAR* szFileName, LPCSTR szEntryPoint, LPCSTR szShaderModel, ID3DBlob** ppBlobOut);
    void CleanupDevice();

private:
    HWND g_hWnd;
    HINSTANCE g_hInst;
    D3D_DRIVER_TYPE g_driverType;
    D3D_FEATURE_LEVEL g_featureLevel;
    ID3D11Device* g_pd3dDevice;
    ID3D11DeviceContext* g_pImmediateContext;
    IDXGISwapChain* g_pSwapChain;
    ID3D11RenderTargetView* g_pRenderTargetView;
    ID3D11Texture2D* g_pDepthStencil;
    ID3D11DepthStencilView* g_pDepthStencilView;
    ID3D11VertexShader* g_pVertexShader;
    ID3D11PixelShader* g_pPixelShader;
    ID3D11InputLayout* g_pVertexLayout;
};

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
