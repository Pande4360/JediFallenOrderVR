#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "NetConnection.hpp"
#include "NetViewer.hpp"
_Script_Engine::Actor*& _Script_Engine::NetViewer::get_ViewTarget() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x10);
}
_Script_Engine::NetConnection*& _Script_Engine::NetViewer::get_Connection() {
    return *(_Script_Engine::NetConnection**)((uintptr_t)this + 0x0);
}
_Script_Engine::Actor*& _Script_Engine::NetViewer::get_InViewer() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x8);
}
void* _Script_Engine::NetViewer::get_ViewLocation() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::NetViewer::get_ViewDir() {
    return (void*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_Engine::NetViewer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NetViewer");
    return result;
}
