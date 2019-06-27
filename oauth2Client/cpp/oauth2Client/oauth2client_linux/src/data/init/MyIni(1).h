#ifndef MY_INI_H_
#define MY_INI_H_
#include <Tools/MyIni/MyIniBase.h>
#include <Tools/MySingleton.h>

class CMyIni:public CIniBase,public MySingleton<CMyIni>
{
public:
	CMyIni();
protected:
	bool OnDeal(const std::string & strjson);
public:
	std::string m_verify_url;//��ȡ��֤��url
	std::string m_check_user_url;//��֤�û��Ƿ����
	std::string m_doaction_url;//ע���޸�����
	std::string m_login_url;//��¼
	std::string m_check_token_url;//��֤token
	std::string m_refresh_token_url;//ˢ��token
	std::string m_token_type;//��Ȩ����
	std::string m_app_id;
	std::string m_app_secret;
private:
	bool m_isInit = false;
};

#endif // !MY_INI_H_
