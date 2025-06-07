#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsSignificanceManager.hpp"
#include "SignificanceManager.hpp"
_Script_CoreUObject::Class* _Script_SignificanceManager::RsSignificanceManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SignificanceManager.RsSignificanceManager");
    return result;
}
