#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CanvasUVTri.hpp"
void* _Script_Engine::CanvasUVTri::get_V2_UV() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::CanvasUVTri::get_V0_Pos() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CanvasUVTri::get_V0_UV() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::CanvasUVTri::get_V0_Color() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::CanvasUVTri::get_V1_Pos() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::CanvasUVTri::get_V2_Pos() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::CanvasUVTri::get_V1_UV() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::CanvasUVTri::get_V1_Color() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::CanvasUVTri::get_V2_Color() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::CanvasUVTri::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CanvasUVTri");
    return result;
}
