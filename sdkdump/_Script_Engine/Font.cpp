#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Font.hpp"
void* _Script_Engine::Font::get_MaxCharHeight() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_Engine::Font::get_Textures() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::Font::get_FontCacheType() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::Font::get_Characters() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::Font::get_Descent() {
    return *(float*)((uintptr_t)this + 0x64);
}
int32_t& _Script_Engine::Font::get_IsRemapped() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
float& _Script_Engine::Font::get_EmScale() {
    return *(float*)((uintptr_t)this + 0x5c);
}
float& _Script_Engine::Font::get_Ascent() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::Font::get_Leading() {
    return *(float*)((uintptr_t)this + 0x68);
}
int32_t& _Script_Engine::Font::get_Kerning() {
    return *(int32_t*)((uintptr_t)this + 0x6c);
}
void* _Script_Engine::Font::get_ImportOptions() {
    return (void*)((uintptr_t)this + 0x70);
}
int32_t& _Script_Engine::Font::get_NumCharacters() {
    return *(int32_t*)((uintptr_t)this + 0x120);
}
float& _Script_Engine::Font::get_ScalingFactor() {
    return *(float*)((uintptr_t)this + 0x138);
}
int32_t& _Script_Engine::Font::get_LegacyFontSize() {
    return *(int32_t*)((uintptr_t)this + 0x13c);
}
void* _Script_Engine::Font::get_LegacyFontName() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_Engine::Font::get_CompositeFont() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_CoreUObject::Class* _Script_Engine::Font::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Font");
    return result;
}
