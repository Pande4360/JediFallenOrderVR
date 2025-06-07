#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "FontFace.hpp"
void* _Script_Engine::FontFace::get_SourceFilename() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::FontFace::get_Hinting() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::FontFace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.FontFace");
    return result;
}
void* _Script_Engine::FontFace::get_LoadingPolicy() {
    return (void*)((uintptr_t)this + 0x41);
}
void* _Script_Engine::FontFace::get_LayoutMethod() {
    return (void*)((uintptr_t)this + 0x42);
}
