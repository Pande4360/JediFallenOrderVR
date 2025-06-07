#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CameraBlockingVolume.hpp"
#include "Volume.hpp"
_Script_CoreUObject::Class* _Script_Engine::CameraBlockingVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CameraBlockingVolume");
    return result;
}
