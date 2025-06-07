#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CanvasIcon.hpp"
#include "Texture.hpp"
_Script_Engine::Texture*& _Script_Engine::CanvasIcon::get_Texture() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x0);
}
float& _Script_Engine::CanvasIcon::get_U() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::CanvasIcon::get_V() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Engine::CanvasIcon::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CanvasIcon");
    return result;
}
float& _Script_Engine::CanvasIcon::get_VL() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::CanvasIcon::get_UL() {
    return *(float*)((uintptr_t)this + 0x10);
}
