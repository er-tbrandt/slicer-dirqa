
#pragma once
#ifndef __vtkMRMLRegistrationQualityNode_h
#define __vtkMRMLRegistrationQualityNode_h

#include <vtkMRML.h>
#include <vtkMRMLNode.h>

#include "vtkSlicerRegistrationQualityModuleLogicExport.h"

/// \ingroup Slicer_QtModules_RegistrationQuality
class VTK_SLICER_REGISTRATIONQUALITY_MODULE_LOGIC_EXPORT vtkMRMLRegistrationQualityNode : 
  public vtkMRMLNode
{
public:   

  static vtkMRMLRegistrationQualityNode *New();
  vtkTypeMacro(vtkMRMLRegistrationQualityNode, vtkMRMLNode);
  void PrintSelf(ostream& os, vtkIndent indent);

  virtual vtkMRMLNode* CreateNodeInstance();
  virtual void ReadXMLAttributes( const char** atts);
  virtual void WriteXML(ostream& of, int indent);
  virtual void Copy(vtkMRMLNode *node);
  virtual const char* GetNodeTagName() {return "RegistrationQualityParameters";};
  virtual void UpdateReferenceID(const char *oldID, const char *newID);

public:
  vtkSetStringMacro(VectorVolumeNodeID);
  vtkGetStringMacro(VectorVolumeNodeID);
  void SetAndObserveVectorVolumeNodeID(const char* id);

  vtkSetStringMacro(ReferenceVolumeNodeID);
  vtkGetStringMacro(ReferenceVolumeNodeID);
  void SetAndObserveReferenceVolumeNodeID(const char* id);

  vtkSetStringMacro(WarpedVolumeNodeID);
  vtkGetStringMacro(WarpedVolumeNodeID);
  void SetAndObserveWarpedVolumeNodeID(const char* id);  
  
  vtkSetStringMacro(OutputModelNodeID);
  vtkGetStringMacro(OutputModelNodeID);
  void SetAndObserveOutputModelNodeID(const char* id);

  // Glyph Parameters
  vtkSetMacro(GlyphPointMax, int);
  vtkGetMacro(GlyphPointMax, int);
  vtkSetMacro(GlyphScale, float);
  vtkGetMacro(GlyphScale, float);
  vtkSetMacro(GlyphScaleDirectional, bool);
  vtkGetMacro(GlyphScaleDirectional, bool);
  vtkSetMacro(GlyphScaleIsotropic, bool);
  vtkGetMacro(GlyphScaleIsotropic, bool);
  vtkSetMacro(GlyphThresholdMax, double);
  vtkGetMacro(GlyphThresholdMax, double);
  vtkSetMacro(GlyphThresholdMin, double);
  vtkGetMacro(GlyphThresholdMin, double);  
  vtkSetMacro(GlyphSeed, int);
  vtkGetMacro(GlyphSeed, int);
  vtkSetMacro(GlyphSourceOption, int);
  vtkGetMacro(GlyphSourceOption, int);
  // Arrow Parameters
  vtkSetMacro(GlyphArrowTipLength, float);
  vtkGetMacro(GlyphArrowTipLength, float);
  vtkSetMacro(GlyphArrowTipRadius, float);
  vtkGetMacro(GlyphArrowTipRadius, float);
  vtkSetMacro(GlyphArrowShaftRadius, float);
  vtkGetMacro(GlyphArrowShaftRadius, float);
  vtkSetMacro(GlyphArrowResolution, int);
  vtkGetMacro(GlyphArrowResolution, int);
  // Cone Parameters
  vtkSetMacro(GlyphConeHeight, float);
  vtkGetMacro(GlyphConeHeight, float);
  vtkSetMacro(GlyphConeRadius, float);
  vtkGetMacro(GlyphConeRadius, float);
  vtkSetMacro(GlyphConeResolution, int);
  vtkGetMacro(GlyphConeResolution, int);
  // Sphere Parameters
  vtkSetMacro(GlyphSphereResolution, float);
  vtkGetMacro(GlyphSphereResolution, float);
    
  // Grid Parameters
  vtkSetMacro(GridScale, float);
  vtkGetMacro(GridScale, float);
  vtkSetMacro(GridDensity, int);
  vtkGetMacro(GridDensity, int);
  
  // Block Parameters
  vtkSetMacro(BlockScale, float);
  vtkGetMacro(BlockScale, float);
  vtkSetMacro(BlockDisplacementCheck, int);
  vtkGetMacro(BlockDisplacementCheck, int);  
    
  // Contour Parameters
  vtkSetMacro(ContourNumber, int);
  vtkGetMacro(ContourNumber, int);
  vtkSetMacro(ContourMin, float);
  vtkGetMacro(ContourMin, float);
  vtkSetMacro(ContourMax, float);
  vtkGetMacro(ContourMax, float);
  
  // Glyph Slice Parameters
  vtkSetStringMacro(GlyphSliceNodeID);
  vtkGetStringMacro(GlyphSliceNodeID);
  void SetAndObserveGlyphSliceNodeID(const char* id);
  vtkSetMacro(GlyphSlicePointMax, int);
  vtkGetMacro(GlyphSlicePointMax, int);
  vtkSetMacro(GlyphSliceThresholdMax, double);
  vtkGetMacro(GlyphSliceThresholdMax, double);
  vtkSetMacro(GlyphSliceThresholdMin, double);
  vtkGetMacro(GlyphSliceThresholdMin, double);    
  vtkSetMacro(GlyphSliceScale, float);
  vtkGetMacro(GlyphSliceScale, float);
  vtkSetMacro(GlyphSliceSeed, int);
  vtkGetMacro(GlyphSliceSeed, int);
  
  //Grid Slice Parameters
  vtkSetStringMacro(GridSliceNodeID);
  vtkGetStringMacro(GridSliceNodeID);
  void SetAndObserveGridSliceNodeID(const char* id);
  vtkSetMacro(GridSliceScale, float);
  vtkGetMacro(GridSliceScale, float);
  vtkSetMacro(GridSliceDensity, int);
  vtkGetMacro(GridSliceDensity, int);
  
protected:
  vtkMRMLRegistrationQualityNode();
  ~vtkMRMLRegistrationQualityNode();

  vtkMRMLRegistrationQualityNode(const vtkMRMLRegistrationQualityNode&);
  void operator=(const vtkMRMLRegistrationQualityNode&);
  
  char* VectorVolumeNodeID;
  char* ReferenceVolumeNodeID;
  char* WarpedVolumeNodeID;
  char* OutputModelNodeID;

//Parameters
protected:
  // Glyph Parameters
  int GlyphPointMax;
  //TODO: Need to change the UI into float too
  float GlyphScale;
  bool GlyphScaleDirectional;
  bool GlyphScaleIsotropic;
  double GlyphThresholdMax;
  double GlyphThresholdMin;
  int GlyphSeed;
  int GlyphSourceOption; //0 - Arrow, 1 - Cone, 2 - Sphere
  // Arrow Parameters
  float GlyphArrowTipLength;
  float GlyphArrowTipRadius;
  float GlyphArrowShaftRadius;
  int GlyphArrowResolution;
  
  // Cone Parameters
  float GlyphConeHeight;
  float GlyphConeRadius;
  int GlyphConeResolution;
  
  // Sphere Parameters
  float GlyphSphereResolution;

  // Grid Parameters
  float GridScale;
  int GridDensity;
  
  // Block Parameters
  float BlockScale;
  int BlockDisplacementCheck;
    
  // Contour Parameters
  int ContourNumber;
  float ContourMin;
  float ContourMax;

  // Glyph Slice Parameters
  char* GlyphSliceNodeID;
  int GlyphSlicePointMax;
  double GlyphSliceThresholdMax;
  double GlyphSliceThresholdMin;
  float GlyphSliceScale;
  int GlyphSliceSeed;
  
  // Grid Slice Parameters
  char* GridSliceNodeID;
  float GridSliceScale;
  int GridSliceDensity;
};

#endif
