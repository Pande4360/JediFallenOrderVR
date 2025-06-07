#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpEdSelKey.hpp"
#include "InterpGroup.hpp"
#include "InterpTrack.hpp"
_Script_Engine::InterpGroup*& _Script_Engine::InterpEdSelKey::get_Group() {
    return *(_Script_Engine::InterpGroup**)((uintptr_t)this + 0x0);
}
_Script_Engine::InterpTrack*& _Script_Engine::InterpEdSelKey::get_Track() {
    return *(_Script_Engine::InterpTrack**)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::InterpEdSelKey::get_KeyIndex() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::InterpEdSelKey::get_UnsnappedPosition() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_Engine::InterpEdSelKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InterpEdSelKey");
    return result;
}
