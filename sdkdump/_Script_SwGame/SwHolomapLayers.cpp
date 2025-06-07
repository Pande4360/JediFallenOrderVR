#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwHolomapLayers.hpp"
void* _Script_SwGame::SwHolomapLayers::get_ActiveMapSections() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwHolomapLayers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwHolomapLayers");
    return result;
}
void* _Script_SwGame::SwHolomapLayers::get_NonActiveMapSections() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Script_SwGame::SwHolomapLayers::get_PlayerArrow() {
    return (void*)((uintptr_t)this + 0x5);
}
void* _Script_SwGame::SwHolomapLayers::get_Doors() {
    return (void*)((uintptr_t)this + 0x3);
}
void* _Script_SwGame::SwHolomapLayers::get_Terrain() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_SwGame::SwHolomapLayers::get_Gateways() {
    return (void*)((uintptr_t)this + 0x4);
}
