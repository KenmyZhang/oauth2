/********************************************************************
    ����ʱ��:     2017/09/27  14:40:24 
    �ļ���:       doaction.h
    ����:         лС��
    emal:        346944475@qq.com
    
    ����:        1.����oauth2Register ��client 
				2.�û���¼
                
    ˵��:        1. 
                2. 
*********************************************************************/
#include <tuple>
#include <string>

#ifndef LOGIN_H_
#define LOGIN_H_

class CLogin {
public:
	/*
		ע������޸�����:
		����:
			username:Ҫ�������û���
			password:����(md5)
	*/
	std::tuple<bool, std::string> OnLogin(std::string username,std::string password);

	/*
		��֤token
		����:
			token
		���أ�
			�ɹ�����username �� ����ʱ��(expire_time)(��)
	*/
	std::tuple<bool, std::string> OnCheckToken(std::string token);


	/*
	ˢ��token
	����:
	token
	���أ�
	�ɹ�����username �� ����ʱ��(expire_time)(��)
	*/
	std::tuple<bool, std::string> OnRefreshToken(std::string refresh_token);
};



#endif // !DOACTION_H_
