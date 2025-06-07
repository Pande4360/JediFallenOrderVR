#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleTypeDataBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleTypeDataBeam2 : public ParticleModuleTypeDataBase {
    private: char pad_30[0x138]; public:
    void* get_BeamMethod();
    int32_t& get_TextureTile();
    float& get_TextureTileDistance();
    int32_t& get_Sheets();
    int32_t& get_MaxBeamCount();
    float& get_Speed();
    int32_t& get_InterpolationPoints();
    bool get_bAlwaysOn();
    void set_bAlwaysOn(bool value);
    int32_t& get_UpVectorStepSize();
    void* get_BranchParentName();
    void* get_Distance();
    void* get_TaperMethod();
    void* get_TaperFactor();
    void* get_TaperScale();
    bool get_RenderGeometry();
    void set_RenderGeometry(bool value);
    bool get_RenderDirectLine();
    void set_RenderDirectLine(bool value);
    bool get_RenderLines();
    void set_RenderLines(bool value);
    bool get_RenderTessellation();
    void set_RenderTessellation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x168
#pragma pack(pop)
}
