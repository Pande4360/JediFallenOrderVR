#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ClientReceiveData.hpp"
#include "PlayerController.hpp"
#include "PlayerState.hpp"
_Script_Engine::PlayerController*& _Script_Engine::ClientReceiveData::get_LocalPC() {
    return *(_Script_Engine::PlayerController**)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::ClientReceiveData::get_MessageIndex() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::ClientReceiveData::get_MessageType() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::ClientReceiveData::get_MessageString() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_Engine::PlayerState*& _Script_Engine::ClientReceiveData::get_RelatedPlayerState_1() {
    return *(_Script_Engine::PlayerState**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::ClientReceiveData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ClientReceiveData");
    return result;
}
_Script_CoreUObject::Object*& _Script_Engine::ClientReceiveData::get_OptionalObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x38);
}
_Script_Engine::PlayerState*& _Script_Engine::ClientReceiveData::get_RelatedPlayerState_2() {
    return *(_Script_Engine::PlayerState**)((uintptr_t)this + 0x30);
}
