#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "Interface_PostProcessVolume.hpp"
_Script_CoreUObject::Class* _Script_Engine::Interface_PostProcessVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Interface_PostProcessVolume");
    return result;
}
