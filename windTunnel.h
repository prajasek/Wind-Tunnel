function varargout = WindTunnel(varargin)
% WINDTUNNEL MATLAB code for WindTunnel.fig
%      WINDTUNNEL, by itself, creates a new WINDTUNNEL or raises the existing
%      singleton*.
%
%      H = WINDTUNNEL returns the handle to a new WINDTUNNEL or the handle to
%      the existing singleton*.
%
%      WINDTUNNEL('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in WINDTUNNEL.M with the given input arguments.
%
%      WINDTUNNEL('Property','Value',...) creates a new WINDTUNNEL or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before WindTunnel_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to WindTunnel_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help WindTunnel

% Last Modified by GUIDE v2.5 10-Apr-2016 01:14:48

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @WindTunnel_OpeningFcn, ...
                   'gui_OutputFcn',  @WindTunnel_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before WindTunnel is made visible.
function WindTunnel_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to WindTunnel (see VARARGIN)

% Choose default command line output for WindTunnel
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

global hts lts wts dts fts Kts Pts fnozzle Lnozzle dnozzle Knozzle Pnozzle
global density vel Khc Phc eff
density = str2num(get(handles.density, 'String'));
fts = 0.0099;
Khc = 0.20;
eff = 0.9;
% UIWAIT makes WindTunnel wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = WindTunnel_OutputFcn(hObject, eventdata, handles)
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function velocity_Callback(hObject, eventdata, handles)
% hObject    handle to velocity (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of velocity as text
%        str2double(get(hObject,'String')) returns contents of velocity as a double


% --- Executes during object creation, after setting all properties.
function velocity_CreateFcn(hObject, eventdata, handles)
% hObject    handle to velocity (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit2_Callback(hObject, eventdata, handles)
% hObject    handle to edit2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit2 as text
%        str2double(get(hObject,'String')) returns contents of edit2 as a double


% --- Executes during object creation, after setting all properties.
function edit2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit3_Callback(hObject, eventdata, handles)
% hObject    handle to edit3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit3 as text
%        str2double(get(hObject,'String')) returns contents of edit3 as a double


% --- Executes during object creation, after setting all properties.
function edit3_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit6_Callback(hObject, eventdata, handles)
% hObject    handle to edit6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit6 as text
%        str2double(get(hObject,'String')) returns contents of edit6 as a double


% --- Executes during object creation, after setting all properties.
function edit6_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function density_Callback(hObject, eventdata, handles)
% hObject    handle to density (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of density as text
%        str2double(get(hObject,'String')) returns contents of density as a double


% --- Executes during object creation, after setting all properties.
function density_CreateFcn(hObject, eventdata, handles)
% hObject    handle to density (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function nooffan_Callback(hObject, eventdata, handles)
% hObject    handle to nooffan (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of nooffan as text
%        str2double(get(hObject,'String')) returns contents of nooffan as a double


% --- Executes during object creation, after setting all properties.
function nooffan_CreateFcn(hObject, eventdata, handles)
% hObject    handle to nooffan (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in clearbutton.
function clearbutton_Callback(hObject, eventdata, handles)
% hObject    handle to clearbutton (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
set(handles.kts, 'String', num2str(0));
set(handles.pts, 'String', num2str(0));
set(handles.knozzle, 'String', num2str(0));
set(handles.pnozzle, 'String', num2str(0));
set(handles.kh, 'String', num2str(0));
set(handles.ph, 'String', num2str(0));
set(handles.powerwatts, 'String', num2str(0));
set(handles.powerhp, 'String', num2str(0));
set(handles.cfm, 'String', num2str(0));
set(handles.length, 'String', num2str(0));
set(handles.width, 'String', num2str(0));
set(handles.height, 'String', num2str(0));
set(handles.velocity, 'String', num2str(0));
set(handles.nooffan, 'String', num2str(0));

function kh_Callback(hObject, eventdata, handles)
% hObject    handle to kh (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of kh as text
%        str2double(get(hObject,'String')) returns contents of kh as a double


% --- Executes during object creation, after setting all properties.
function kh_CreateFcn(hObject, eventdata, handles)
% hObject    handle to kh (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function ph_Callback(hObject, eventdata, handles)
% hObject    handle to ph (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of ph as text
%        str2double(get(hObject,'String')) returns contents of ph as a double


% --- Executes during object creation, after setting all properties.
function ph_CreateFcn(hObject, eventdata, handles)
% hObject    handle to ph (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function knozzle_Callback(hObject, eventdata, handles)
% hObject    handle to knozzle (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of knozzle as text
%        str2double(get(hObject,'String')) returns contents of knozzle as a double


% --- Executes during object creation, after setting all properties.
function knozzle_CreateFcn(hObject, eventdata, handles)
% hObject    handle to knozzle (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function pnozzle_Callback(hObject, eventdata, handles)
% hObject    handle to pnozzle (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of pnozzle as text
%        str2double(get(hObject,'String')) returns contents of pnozzle as a double


% --- Executes during object creation, after setting all properties.
function pnozzle_CreateFcn(hObject, eventdata, handles)
% hObject    handle to pnozzle (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function kts_Callback(hObject, eventdata, handles)
% hObject    handle to kts (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of kts as text
%        str2double(get(hObject,'String')) returns contents of kts as a double


% --- Executes during object creation, after setting all properties.
function kts_CreateFcn(hObject, eventdata, handles)
% hObject    handle to kts (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function pts_Callback(hObject, eventdata, handles)
% hObject    handle to pts (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of pts as text
%        str2double(get(hObject,'String')) returns contents of pts as a double


% --- Executes during object creation, after setting all properties.
function pts_CreateFcn(hObject, eventdata, handles)
% hObject    handle to pts (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function powerhp_Callback(hObject, eventdata, handles)
% hObject    handle to powerhp (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of powerhp as text
%        str2double(get(hObject,'String')) returns contents of powerhp as a double


% --- Executes during object creation, after setting all properties.
function powerhp_CreateFcn(hObject, eventdata, handles)
% hObject    handle to powerhp (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function cfm_Callback(hObject, eventdata, handles)
% hObject    handle to cfm (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of cfm as text
%        str2double(get(hObject,'String')) returns contents of cfm as a double


% --- Executes during object creation, after setting all properties.
function cfm_CreateFcn(hObject, eventdata, handles)
% hObject    handle to cfm (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function powerwatts_Callback(hObject, eventdata, handles)
% hObject    handle to powerwatts (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of powerwatts as text
%        str2double(get(hObject,'String')) returns contents of powerwatts as a double


% --- Executes during object creation, after setting all properties.
function powerwatts_CreateFcn(hObject, eventdata, handles)
% hObject    handle to powerwatts (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function height_Callback(hObject, eventdata, handles)
% hObject    handle to height (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of height as text
%        str2double(get(hObject,'String')) returns contents of height as a double


% --- Executes during object creation, after setting all properties.
function height_CreateFcn(hObject, eventdata, handles)
% hObject    handle to height (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function width_Callback(hObject, eventdata, handles)
% hObject    handle to width (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of width as text
%        str2double(get(hObject,'String')) returns contents of width as a double


% --- Executes during object creation, after setting all properties.
function width_CreateFcn(hObject, eventdata, handles)
% hObject    handle to width (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function length_Callback(hObject, eventdata, handles)
% hObject    handle to length (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of length as text
%        str2double(get(hObject,'String')) returns contents of length as a double


% --- Executes during object creation, after setting all properties.
function length_CreateFcn(hObject, eventdata, handles)
% hObject    handle to length (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in calculate.
function calculate_Callback(hObject, eventdata, handles)
% hObject    handle to calculate (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
global hts lts wts dts fts Kts Pts fnozzle Lnozzle dnozzle Knozzle Pnozzle
global density vel Khc Phc eff
hts = str2num(get(handles.height, 'String'));
wts = str2num(get(handles.width, 'String'));
lts = str2num(get(handles.length, 'String'));
dts = 2*sqrt(hts*wts/pi);
Kts = fts*lts/dts;
vel = str2num(get(handles.velocity, 'String'));
Pts = Kts*0.5*density*((vel)^2);
fnozzle = fts/2;
Lnozzle = get(handles.length, 'Value');
dnozzle = dts;
Knozzle = 0.32*fnozzle*1 / dnozzle;
Pnozzle = Knozzle*0.5*density*((vel/2)^2);
Phc = 0.20*0.5*density*vel*vel;
Ptot = Phc + Pnozzle + Pts;
Q = vel * hts * wts;
power = Ptot * Q / eff;
powerhp = power*0.00134102209 ;
number_fan = str2num(get(handles.nooffan, 'String'));
cfm = [(Q*2118.88)/number_fan];
set(handles.kts, 'String', num2str(Kts));
set(handles.pts, 'String', num2str(Pts));
set(handles.knozzle, 'String', num2str(Knozzle));
set(handles.pnozzle, 'String', num2str(Pnozzle));
set(handles.kh, 'String', num2str(Khc));
set(handles.ph, 'String', num2str(Phc));
set(handles.powerwatts, 'String', num2str(power));
set(handles.powerhp, 'String', num2str(powerhp));
set(handles.cfm, 'String', num2str(cfm));

E.	ANSYS User-Defined Function (UDF)  - 2D Wind Tunnel Inlet Pressure Profile

#include "udf.h"                                                           DEFINE_PROFILE(pressure_profile,t,i)                                                              {                                                                                                 real x[ND_ND];                /* this will hold the position vector */                          real y;              										    face_t f;												  begin_f_loop(f,t);												 {														 F_CENTROID(x,f,t);											 y = x[1];												 F_PROFILE(f,t,i) = 100+50*y;								 }												  end_f_loop(f,t)										       }

F.	ANSYS User-Defined Function (UDF)  - 2D Contraction Nozzle Inlet Pressure Profile
	
#include "udf.h"                                                           DEFINE_PROFILE(pressure_profile,t,i)                                                              {                                                                                                 real x[ND_ND];                /* this will hold the position vector */                          real y;              										    face_t f;												  begin_f_loop(f,t);												 {														 F_CENTROID(x,f,t);											 y = x[1];												 F_PROFILE(f,t,i) = 100+50*y-77;								 }												  end_f_loop(f,t)										       }

G.	ANSYS User-Defined Function (UDF)  – 3D Wind Tunnel Inlet Pressure Profile

#include"udf.h"						                   DEFINE_PROFILE(pressureprofile, thread, position) /* inlet x velocity = name of the x velocity *  {												     real x[ND_ND]; 				    /* this will hold the position vector */     real y,z,a; 											  face_t f;     					    /* f = all the cell faces on the boundary*/ begin_f_loop(f,thread) 	/* Loop Initialization - loop across all the cells in the face */  { 													F_CENTROID(x, f, thread); 									if((x[1] >= 0.003))                         /* x[1] is the y-coordinate ;  */					     /*  Condition A implies the upper half of the I and II Quadrant */		{														F_PROFILE(f, thread, position) = 650; /* The value of pressure for the Condition A													*/	}												else if((x[1] >= 0.001) && (x[1] < 0.003))   										/* Condition B - The lower half of the I and II Quadrant */			{ 														F_PROFILE(f, thread, position) = 300;   /* Pressure value for Condition B*/   	}												else 												{														F_PROFILE(f, thread, position) = 250;	/* Pressure value for Condition C */			}											       }												end_f_loop(f, thread)						/*  End of Loop */	       }


