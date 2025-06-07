#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "MovieSceneCaptureInterface.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneCapture::MovieSceneCaptureInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.MovieSceneCaptureInterface");
    return result;
}
