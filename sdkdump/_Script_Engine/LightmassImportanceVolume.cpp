#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightmassImportanceVolume.hpp"
#include "Volume.hpp"
_Script_CoreUObject::Class* _Script_Engine::LightmassImportanceVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LightmassImportanceVolume");
    return result;
}
