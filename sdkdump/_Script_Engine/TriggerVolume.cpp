#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TriggerVolume.hpp"
#include "Volume.hpp"
_Script_CoreUObject::Class* _Script_Engine::TriggerVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TriggerVolume");
    return result;
}
