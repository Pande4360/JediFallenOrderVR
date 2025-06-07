#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackColorScale.hpp"
#include "InterpTrackVectorBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::InterpTrackColorScale::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackColorScale");
    return result;
}
