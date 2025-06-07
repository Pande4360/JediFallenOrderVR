#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StreamingTexturePrimitiveInfo.hpp"
#include "Texture2D.hpp"
_Script_Engine::Texture2D*& _Script_Engine::StreamingTexturePrimitiveInfo::get_Texture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::StreamingTexturePrimitiveInfo::get_Bounds() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::StreamingTexturePrimitiveInfo::get_TexelFactor() {
    return *(float*)((uintptr_t)this + 0x24);
}
void* _Script_Engine::StreamingTexturePrimitiveInfo::get_PackedRelativeBox() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::StreamingTexturePrimitiveInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StreamingTexturePrimitiveInfo");
    return result;
}
