
/********************************************************************
    ����ʱ��:     2017/09/26  16:12:30 
    �ļ���:       verify.h
    ����:         лС��
    emal:        346944475@qq.com
    
    ����:        1.����oauth2Register ��client 
                2.��ȡ��֤��(�ֻ�������)
                
    ˵��:        1. 
                2. 
*********************************************************************/

#ifndef VERIFY_H_
#define VERIFY_H_
#include <tuple>
#include <string>

class CVerify
{
public:
	/*
	��ȡ��֤�룺

	����:
		username:�û�����֧���ʼ�������
		lg:cn,���ġ�en,Ӣ��
		flag:1:ע�ᣬ2:�޸�����
		smsFlag:���ű�־ 1������ ��2������
	����ֵ:
		tup<0> :false:����ʧ�ܣ��������⣬true�����ͳɹ������з���ֵ
		tup<1> �����صĽ��
		������鿴����������Ϣ����ͨ�ýӿ�
	*/
	std::tuple<bool, std::string> OnGetVerify(std::string username, std::string lg,int flag ,int smsFlag = 1);

	/*
		��֤�û��Ƿ����
	*/
	std::tuple<bool, std::string> OnCheckUser(std::string username);
};

#endif