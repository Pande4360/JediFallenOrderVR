#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EngineMessage.hpp"
#include "LocalMessage.hpp"
void* _Script_Engine::EngineMessage::get_FailedPlaceMessage() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::EngineMessage::get_SpecEnteredMessage() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::EngineMessage::get_MaxedOutMessage() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::EngineMessage::get_EnteredMessage() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::EngineMessage::get_LeftMessage() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::EngineMessage::get_GlobalNameChange() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::EngineMessage::get_NewSpecMessage() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::EngineMessage::get_NewPlayerMessage() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Engine::EngineMessage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.EngineMessage");
    return result;
}
