#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DynamicTextureInstance.hpp"
#include "StreamableTextureInstance.hpp"
#include "Texture2D.hpp"
_Script_Engine::Texture2D*& _Script_Engine::DynamicTextureInstance::get_Texture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::DynamicTextureInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DynamicTextureInstance");
    return result;
}
void _Script_Engine::DynamicTextureInstance::set_bAttached(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::DynamicTextureInstance::get_bAttached() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
float& _Script_Engine::DynamicTextureInstance::get_OriginalRadius() {
    return *(float*)((uintptr_t)this + 0x34);
}
