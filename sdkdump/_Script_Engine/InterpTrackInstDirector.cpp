#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "InterpTrackInst.hpp"
#include "InterpTrackInstDirector.hpp"
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstDirector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstDirector");
    return result;
}
_Script_Engine::Actor*& _Script_Engine::InterpTrackInstDirector::get_OldViewTarget() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x28);
}
