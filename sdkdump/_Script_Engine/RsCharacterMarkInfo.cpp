#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCharacterMarkInfo.hpp"
#include "Texture2D.hpp"
void* _Script_Engine::RsCharacterMarkInfo::get_DestCoords() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_Engine::Texture2D*& _Script_Engine::RsCharacterMarkInfo::get_Texture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RsCharacterMarkInfo::get_SourceCoords() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::RsCharacterMarkInfo::get_DestMask() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::RsCharacterMarkInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsCharacterMarkInfo");
    return result;
}
