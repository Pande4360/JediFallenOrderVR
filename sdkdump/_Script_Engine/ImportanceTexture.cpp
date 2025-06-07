#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ImportanceTexture.hpp"
void* _Script_Engine::ImportanceTexture::get_Size() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::ImportanceTexture::get_NumMips() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::ImportanceTexture::get_MarginalCDF() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::ImportanceTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ImportanceTexture");
    return result;
}
void* _Script_Engine::ImportanceTexture::get_ConditionalCDF() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::ImportanceTexture::get_Texture() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::ImportanceTexture::get_TextureData() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ImportanceTexture::get_Weighting() {
    return (void*)((uintptr_t)this + 0x48);
}
