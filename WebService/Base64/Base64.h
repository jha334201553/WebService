#pragma once
#ifndef _BASE64_H_
#define _BASE64_H_


#include <stdio.h>
#include <windows.h>


/**************************************************
//
// ��������:		Base64_decode
// ��������:		Base64�㷨�Ľ��뺯��
// ��������:		lpIndata:	��������	
// ��������:		nlen:		�������ݵĳ���
// ��������:		lpOutBuf:	�������ݻ�����
// ��������ֵ:		���������ݳ���,���������ͱ�ʾ����ʧ��
//
************************************************/
int Base64_decode(const char *lpIndata,int nInLen,unsigned char *lpOutBuf);

/**************************************************
//
// ��������:		Base64_encode
// ��������:		Base64�㷨�ı��뺯��
// ��������:		data:		��������	
// ��������:		nlen:		�������ݵĳ���
// ��������:		lpOutBuf:	�������ݻ�����,���������ΪNULL,��ô�ͷ��ر�������Ҫ�Ŀռ��С
// ��������:		nOutSize:	��������С
// ��������ֵ:		���������ݳ���,���������ͱ�ʾ����ʧ��
//
************************************************/
int Base64_encode(const char *data, int len,char *lpOutBuf,int nOutSize);

#endif // _BASE64_H_