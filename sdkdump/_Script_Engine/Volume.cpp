#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Brush.hpp"
#include "Volume.hpp"
_Script_CoreUObject::Class* _Script_Engine::Volume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Volume");
    return result;
}
