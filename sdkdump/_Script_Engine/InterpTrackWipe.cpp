#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackFloatBase.hpp"
#include "InterpTrackWipe.hpp"
float& _Script_Engine::InterpTrackWipe::get_WipeDirection() {
    return *(float*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackWipe::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackWipe");
    return result;
}
