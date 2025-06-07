#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_SpawnedByCinematic.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_SpawnedByCinematic::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_SpawnedByCinematic");
    return result;
}
