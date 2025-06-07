#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PlatformInterfaceBase.hpp"
#include "TwitterIntegrationBase.hpp"
bool _Script_Engine::TwitterIntegrationBase::CanShowTweetUI() {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::TwitterIntegrationBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TwitterIntegrationBase");
    return result;
}
bool _Script_Engine::TwitterIntegrationBase::TwitterRequest(void* URL, void*& ParamKeysAndValues, void* RequestMethod, int32_t AccountIndex) {
    return;
}
bool _Script_Engine::TwitterIntegrationBase::ShowTweetUI(void* InitialMessage, void* URL, void* Picture) {
    return;
}
bool _Script_Engine::TwitterIntegrationBase::AuthorizeAccounts() {
    return;
}
void _Script_Engine::TwitterIntegrationBase::Init() {
    return;
}
int32_t _Script_Engine::TwitterIntegrationBase::GetNumAccounts() {
    return;
}
void* _Script_Engine::TwitterIntegrationBase::GetAccountName(int32_t AccountIndex) {
    return;
}
