#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FontCharacter.hpp"
int32_t& _Script_Engine::FontCharacter::get_USize() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::FontCharacter::get_StartU() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::FontCharacter::get_VerticalOffset() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
int32_t& _Script_Engine::FontCharacter::get_StartV() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Engine::FontCharacter::get_VSize() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::FontCharacter::get_TextureIndex() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::FontCharacter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FontCharacter");
    return result;
}
