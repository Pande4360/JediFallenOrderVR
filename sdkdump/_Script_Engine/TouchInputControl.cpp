#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Texture2D.hpp"
#include "TouchInputControl.hpp"
_Script_Engine::Texture2D*& _Script_Engine::TouchInputControl::get_Image1() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x0);
}
_Script_Engine::Texture2D*& _Script_Engine::TouchInputControl::get_Image2() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x8);
}
void* _Script_Engine::TouchInputControl::get_MainInputKey() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::TouchInputControl::get_Center() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::TouchInputControl::get_VisualSize() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::TouchInputControl::get_ThumbSize() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::TouchInputControl::get_InteractionSize() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::TouchInputControl::get_InputScale() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::TouchInputControl::get_AltInputKey() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::TouchInputControl::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TouchInputControl");
    return result;
}
