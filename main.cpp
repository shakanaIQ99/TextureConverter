#include <cstdio>
#include <cstdlib>
#include <DirectXTex.h>
#include <assert.h>
#include "TextureConverter.h"

enum Argument
{
	ApplicationPath,
	FilePath,

	NumArgument
};

int main(size_t argc,char* argv[])
{
	assert(argc >= NumArgument);

	//COMライブラリの初期化
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//テクスチャコンバータ
	TextureConverter converter;


	//テクスチャ変換
	converter.ConvertTextureWICToDDS(argv[FilePath]);


	//COMライブラリの終了
	CoUninitialize();

	system("pause");


	return 0;
}