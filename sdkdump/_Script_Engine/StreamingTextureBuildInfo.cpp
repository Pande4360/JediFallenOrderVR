#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StreamingTextureBuildInfo.hpp"
void* _Script_Engine::StreamingTextureBuildInfo::get_PackedRelativeBox() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::StreamingTextureBuildInfo::get_TextureLevelIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::StreamingTextureBuildInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StreamingTextureBuildInfo");
    return result;
}
float& _Script_Engine::StreamingTextureBuildInfo::get_TexelFactor() {
    return *(float*)((uintptr_t)this + 0x8);
}
