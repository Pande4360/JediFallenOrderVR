#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CachedKeyToActionInfo.hpp"
#include "PlayerInput.hpp"
_Script_Engine::PlayerInput*& _Script_Engine::CachedKeyToActionInfo::get_PlayerInput() {
    return *(_Script_Engine::PlayerInput**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::CachedKeyToActionInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CachedKeyToActionInfo");
    return result;
}
