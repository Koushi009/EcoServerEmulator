// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� ECOCRYPTOLIB_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// ECOCRYPTOLIB_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef ECOCRYPTOLIB_EXPORTS
#define ECOCRYPTOLIB_API __declspec(dllexport)
#else
#define ECOCRYPTOLIB_API __declspec(dllimport)
#endif

#include "stdafx.h"
#include <cryptopp/rijndael.h>
#include <cryptopp/rsa.h>
#include <cryptopp/osrng.h>
#include <cryptopp/cryptlib.h>
#include <string>
#include <iostream>
#include <sstream>

EXTERN_C_START

ECOCRYPTOLIB_API void GenerateServerPublicKey();

ECOCRYPTOLIB_API void GetServerPublicKeyBytes(BYTE* buf, size_t& offset);

ECOCRYPTOLIB_API BYTE* CalculateRijndaelKey(BYTE* data);


EXTERN_C_END