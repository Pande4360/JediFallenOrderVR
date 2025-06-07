#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "KillZVolume.hpp"
#include "PhysicsVolume.hpp"
_Script_CoreUObject::Class* _Script_Engine::KillZVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.KillZVolume");
    return result;
}
