#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Actor.hpp"
#include "InterpGroup.hpp"
#include "InterpGroupInst.hpp"
void* _Script_Engine::InterpGroupInst::get_TrackInst() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::InterpGroup*& _Script_Engine::InterpGroupInst::get_Group() {
    return *(_Script_Engine::InterpGroup**)((uintptr_t)this + 0x28);
}
_Script_Engine::Actor*& _Script_Engine::InterpGroupInst::get_GroupActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::InterpGroupInst::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpGroupInst");
    return result;
}
