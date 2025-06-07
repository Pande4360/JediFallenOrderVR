#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FilmStockSettings.hpp"
_Script_CoreUObject::Class* _Script_Engine::FilmStockSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FilmStockSettings");
    return result;
}
float& _Script_Engine::FilmStockSettings::get_Slope() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::FilmStockSettings::get_WhiteClip() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::FilmStockSettings::get_Toe() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::FilmStockSettings::get_Shoulder() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::FilmStockSettings::get_BlackClip() {
    return *(float*)((uintptr_t)this + 0xc);
}
