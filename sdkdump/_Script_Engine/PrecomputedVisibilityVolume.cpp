#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PrecomputedVisibilityVolume.hpp"
#include "Volume.hpp"
_Script_CoreUObject::Class* _Script_Engine::PrecomputedVisibilityVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PrecomputedVisibilityVolume");
    return result;
}
