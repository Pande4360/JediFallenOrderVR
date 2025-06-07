#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackInst.hpp"
#include "InterpTrackInstSlomo.hpp"
float& _Script_Engine::InterpTrackInstSlomo::get_OldTimeDilation() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstSlomo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstSlomo");
    return result;
}
