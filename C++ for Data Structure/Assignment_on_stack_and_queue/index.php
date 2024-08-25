@if (\Auth::user()->type != 'employee')
    <td>{{ !empty($attendance->employee) ? $attendance->employee->name : '' }}</td>
@endif

<td>{{ !empty($attendance->attended_emp_id) ? @\App\Models\Employee::find($attendance->attended_emp_id)->name : '' }}</td>

<td>{{ \Auth::user()->dateFormat($attendance->date) }}</td>
<td>{{ $attendance->project_name }}</td>
<td>{{ $attendance->location }}</td>
<td>
    {{ $attendance->clock_in != '00:00:00' ? \Auth::user()->timeFormat($attendance->clock_in) : '00:00' }}
    <br/>
    {{ $attendance->clock_out != '00:00:00' ? \Auth::user()->timeFormat($attendance->clock_out) : '00:00' }}
</td>
<td>
    {{  $attendance->status }}
    <br/>
    {{  $attendance->working_status }}
</td>
<td>{{ $attendance->late }}</td>