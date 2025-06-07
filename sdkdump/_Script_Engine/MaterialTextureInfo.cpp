#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialTextureInfo.hpp"
void* _Script_Engine::MaterialTextureInfo::get_TextureName() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::MaterialTextureInfo::get_SamplingScale() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialTextureInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialTextureInfo");
    return result;
}
int32_t& _Script_Engine::MaterialTextureInfo::get_UVChannelIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
